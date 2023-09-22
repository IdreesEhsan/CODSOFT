#include <iostream>
#include <vector>
#include <string>

class Task {
public:
	Task(const std::string& description, bool completed = false): description(description), completed(completed) {}

	std::string description;
	bool completed;
};
