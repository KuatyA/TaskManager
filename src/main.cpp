#include "../build/main_window.h"

int main(int argc, char *argv[]){
    auto c_task_manager = TaskManager::create();

    c_task_manager->run();
    return 0;
}