const shuffleButton = document.getElementById("shuffleButton");
const roomContainers = document.querySelectorAll(".room");
const allGirlParagraphs = document.querySelectorAll(".room .girl");

function shuffleArray(array) {
    for (let i = array.length - 1; i > 0; i--) {
        const j = Math.floor(Math.random() * (i + 1));
        [array[i], array[j]] = [array[j], array[i]];
    }
}

shuffleButton.addEventListener("click", () => {
    const allGirlNames = Array.from(allGirlParagraphs).map(girl => girl.textContent);
    shuffleArray(allGirlNames);

    allGirlParagraphs.forEach((girl, index) => {
        girl.textContent = allGirlNames[index];
    });

    const shuffledRoomContainers = Array.from(roomContainers);
    shuffleArray(shuffledRoomContainers);

    shuffledRoomContainers.forEach((roomContainer, index) => {
        roomContainer.style.order = index;
    });
});




// Function to generate a text content for a room
function generateRoomText(roomContainer) {
    const roomTitle = roomContainer.querySelector("h2").textContent;
    const girlParagraphs = roomContainer.querySelectorAll(".girl");
    const girlNames = Array.from(girlParagraphs).map(girl => girl.textContent);
    return `${roomTitle}\n${girlNames.join("\n")}\n\n`;
}

// Function to trigger the download
function downloadRoomLists() {
    const combinedRoomText = Array.from(roomContainers).map(roomContainer => {
        return generateRoomText(roomContainer);
    }).join("");

    const blob = new Blob([combinedRoomText], { type: "text/plain" });
    const url = URL.createObjectURL(blob);
    const a = document.createElement("a");
    a.href = url;
    a.download = "room_lists.txt";
    document.body.appendChild(a);
    a.click();
    document.body.removeChild(a);
    URL.revokeObjectURL(url);
}

// Attach a click event listener to the "Download Room Lists" button
const downloadButton = document.createElement("button");
downloadButton.textContent = "Download Room Lists";
downloadButton.addEventListener("click", downloadRoomLists);

// Append the download button to the header
const header = document.querySelector("header");
header.appendChild(downloadButton);


