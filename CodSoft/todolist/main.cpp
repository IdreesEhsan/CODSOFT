
#include"ToDoList.h"

int main() 
{
	ToDoList todoList;
	std::cout << "\t\t\t\t\tConsole-based Task to do list\n";
	while (true) {
		std::cout << "\nOptions:" << std::endl;
		std::cout << "1. Add Task" << std::endl;
		std::cout << "2. View Tasks" << std::endl;
		std::cout << "3. Mark Task as Completed" << std::endl;
		std::cout << "4. Remove Task" << std::endl;
		std::cout << "5. Quit" << std::endl;

		std::cout << "Enter your choice (1/2/3/4/5): ";
		int choice;
		std::cin >> choice;

		switch (choice) {
		case 1:
		{
				  std::cin.ignore(); // Clear the newline character from the input buffer
				  std::string taskDescription;
				  std::cout << "Enter the task description: ";
				  std::getline(std::cin, taskDescription);
				  todoList.addTask(taskDescription);
		}
			break;
		case 2:
			todoList.viewTasks();
			break;
		case 3:
		{
				  size_t taskIndex;
				  std::cout << "Enter the task index to mark as completed: ";
				  std::cin >> taskIndex;
				  todoList.markTaskCompleted(taskIndex);
		}
			break;
		case 4:
		{
				  size_t taskIndex;
				  std::cout << "Enter the task index to remove: ";
				  std::cin >> taskIndex;
				  todoList.removeTask(taskIndex);
		}
			break;
		case 5:
			std::cout << "Goodbye!" << std::endl;
			return 0;
		default:
			std::cout << "Invalid choice. Please try again." << std::endl;
		}
	}

	return 0;
}
