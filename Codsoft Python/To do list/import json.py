import json

# Function to load tasks from a JSON file
def load_tasks():
    try:
        with open("tasks.json", "r") as file:
            return json.load(file)
    except (FileNotFoundError, json.JSONDecodeError):
        return []

# Function to save tasks to a JSON file
def save_tasks(tasks):
    with open("tasks.json", "w") as file:
        json.dump(tasks, file, indent=4)

# Function to add a new task
def add_task(tasks, task_name):
    tasks.append({"name": task_name, "done": False})

# Function to mark a task as done
def mark_done(tasks, task_index):
    if 0 <= task_index < len(tasks):
        tasks[task_index]["done"] = True

# Function to display tasks
def display_tasks(tasks):
    if not tasks:
        print("No tasks found.")
    else:
        for i, task in enumerate(tasks):
            status = "[ ]" if not task["done"] else "[X]"
            print(f"{i + 1}. {status} {task['name']}")

def main():
    tasks = load_tasks()

    while True:
        print("\nTo-Do List:")
        display_tasks(tasks)
        print("\nOptions:")
        print("1. Add a new task")
        print("2. Mark a task as done")
        print("3. Quit")
        choice = input("Enter the option number: ")

        if choice == "1":
            task_name = input("Enter the task name: ")
            add_task(tasks, task_name)
        elif choice == "2":
            task_index = int(input("Enter the task number to mark as done: ")) - 1
            mark_done(tasks, task_index)
        elif choice == "3":
            save_tasks(tasks)
            print("Goodbye!")
            break
        else:
            print("Invalid option. Please choose a valid option.")

if __name__ == "__main__":
    main()
