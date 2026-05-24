const prompt = require("prompt-sync")();

let tasks = [];

function addTask() {
    const task = prompt("Enter task to add: ");
    if (task.trim() === "") {
        console.log("Task cannot be empty!");
        return;
    }
    tasks.push(task);
    console.log("Task added successfully!");
}


function removeTask() {
    displayTasks();

    const index = parseInt(prompt("Enter task index to remove: "));

    if (isNaN(index) || index < 1 || index > tasks.length) {
        console.log("Invalid task index!");
        return;
    }

    tasks.splice(index - 1, 1);
    console.log("Task removed successfully!");
}

function displayTasks() {
    if (tasks.length === 0) {
        console.log("No tasks in the list.");
        return;
    }

    console.log("\nYour Tasks:");
    tasks.forEach((task, i) => {
        console.log(`${i + 1}. ${task}\n`);
    });
}

function clearTasks() {
    tasks = [];
    console.log("All tasks cleared!");
}

function main() {
    console.log("TO-DO LIST MANAGER ");

    while (true) {
        console.log("\nChoose an option:");
        console.log("add | remove | view | clear | exit");

        const command = prompt("Enter command: ").toLowerCase();

        switch (command) {
            case "add":
                addTask();
                break;
            case "remove":
                removeTask();
                break;
            case "view":
                displayTasks();
                break;
            case "clear":
                clearTasks();
                break;
            case "exit":
                console.log("Exiting program...");
                return;
            default:
                console.log("Invalid command! Try again.");
        }
    }
}
main();
