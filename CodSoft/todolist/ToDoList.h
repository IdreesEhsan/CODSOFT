#include "Task.h"
class ToDoList {
public:
	void addTask(const std::string& taskDescription) {
		Task task(taskDescription);
		tasks.push_back(task);
		std::cout << "Task '" << taskDescription << "' added!" << std::endl;
	}

	void viewTasks() {
		if (tasks.empty()) {
			std::cout << "No tasks to display." << std::endl;
		}
		else {
			std::cout << "Tasks:" << std::endl;
			for (size_t i = 0; i < tasks.size(); ++i) {
				std::string status = tasks[i].completed ? "Completed" : "Pending";
				std::cout << i + 1 << ". " << tasks[i].description << " - " << status << std::endl;
			}
		}
	}

	void markTaskCompleted(size_t taskIndex) {
		if (taskIndex >= 1 && taskIndex <= tasks.size()) {
			Task& task = tasks[taskIndex - 1];
			if (!task.completed) {
				task.completed = true;
				std::cout << "Task '" << task.description << "' marked as completed." << std::endl;
			}
			else {
				std::cout << "Task is already completed." << std::endl;
			}
		}
		else {
			std::cout << "Invalid task index." << std::endl;
		}
	}

	void removeTask(size_t taskIndex) {
		if (taskIndex >= 1 && taskIndex <= tasks.size()) {
			Task removedTask = tasks[taskIndex - 1];
			tasks.erase(tasks.begin() + taskIndex - 1);
			std::cout << "Task '" << removedTask.description << "' removed." << std::endl;
		}
		else {
			std::cout << "Invalid task index." << std::endl;
		}
	}

private:
	std::vector<Task> tasks;
};