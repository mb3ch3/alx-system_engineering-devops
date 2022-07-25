# 0x05. Processes and signals
``DevOps`` ``Shell`` ``Bash`` ``Syscall`` ``Scripting``

## Learning Objectives
At the end of this project, I learnt the following:
- What is a PID?
- What is a process?
- How to find a process’ PID
- How to kill a process
- What is a signal?
- What are the 2 signals that cannot be ignored?

I also learnt how to use the following commands
- ``ps``
- ``pgrep``
- ``pkill``
- ``kill``
- ``exit``
- ``trap``

## TASKS
- Task 0
    - [0-what-is-my-pid](https://github.com/BrightTech10/alx-system_engineering-devops/blob/45c0b4df7b3ce582c6fadeeb480d38b93f49517c/0x05-processes_and_signals/0-what-is-my-pid): A Bash script that displays its own PID

- Task 1
    - [1-list_your_processes](https://github.com/BrightTech10/alx-system_engineering-devops/blob/b2d5de55ab36d8cd1b198d7b75638210e9323250/0x05-processes_and_signals/1-list_your_processes): Bash script that displays a list of currently running processes.
    - Shows all processes for all users, including those not featuring a TTY.
    - Processes are displayed in a user-oriented hierarchy.

- Task 2
    - [2-show_your_bash_pid](https://github.com/BrightTech10/alx-system_engineering-devops/blob/main/0x05-processes_and_signals/2-show_your_bash_pid): Bash script that displays lines containing the bash keyword based on the script defined in ``1-list_your_processes``.

- Task 3
    - [3-show_your_bash_pid_made_easy](https://github.com/BrightTech10/alx-system_engineering-devops/blob/main/0x05-processes_and_signals/3-show_your_bash_pid_made_easy): Bash script that displays the PID along with the process name of processes who name contains the word ``bash``.

- Task 4
    - [4-to_infinity_and_beyond](https://github.com/BrightTech10/alx-system_engineering-devops/blob/main/0x05-processes_and_signals/4-to_infinity_and_beyond): Bash script that displays ``To infinity and beyond`` indefinitely with a ``sleep 2`` in between each iteration.

- Task 5
    - [5-kill_me_now](https://github.com/BrightTech10/alx-system_engineering-devops/blob/main/0x05-processes_and_signals/5-dont_stop_me_now): Bash script that kills the ``4-to_infinity_and_beyond`` process using ``kill``.

- Task 6
    - [6-kill_me_now_made_easy](https://github.com/BrightTech10/alx-system_engineering-devops/blob/main/0x05-processes_and_signals/6-stop_me_if_you_can): Bash script that kills the ``4-to_infinity_and_beyond`` process using ``pkill``

- Task 7
    - [7-highlander](https://github.com/BrightTech10/alx-system_engineering-devops/blob/main/0x05-processes_and_signals/7-highlander): Bash script that displays ``To infinity and beyond`` indefinitely with a ``sleep 2`` in between each iteration.
    - Displays ``I am invincible!!!`` when receiving a ``SIGTERM`` signal

- Task 8
    - [8-beheaded_process](https://github.com/BrightTech10/alx-system_engineering-devops/blob/main/0x05-processes_and_signals/8-beheaded_process): Bash script that kills the process [7-highlander](https://github.com/BrightTech10/alx-system_engineering-devops/blob/main/0x05-processes_and_signals/7-highlander)

- Task 9
    - [100-process_and_pid_file](https://github.com/BrightTech10/alx-system_engineering-devops/blob/main/0x05-processes_and_signals/100-process_and_pid_file): Bash script that creates the file ``/var/run/holbertonscript.pid`` containing its PID and displays ``To infinity and beyond`` indefinitely.
    - Displays ``I hate the kill command`` upon receiving a ``SIGTERM`` signal.
    - Displays ``Y U no love me?!`` upon receiving a ``SIGINT`` signal.
    - Deletes the file ``/var/run/holbertonscript.pid`` and terminates itself upon receiving the ``SIGQUIT`` or ``SIGTERM`` signal

- Task 10
    - [manage_my_process](https://github.com/BrightTech10/alx-system_engineering-devops/blob/main/0x05-processes_and_signals/manage_my_process): Bash script that writes ``I am alive!`` to the file ``/tmp/my_process`` indefinitely.
    - Sleeps two seconds in between each write.
    - [101-manage_my_process](https://github.com/BrightTech10/alx-system_engineering-devops/blob/main/0x05-processes_and_signals/101-manage_my_process): Bash script that manages the [manage_my_process](https://github.com/BrightTech10/alx-system_engineering-devops/blob/main/0x05-processes_and_signals/manage_my_process) script.
        - When passed the argument ``start``:
        - Starts [manage_my_process](https://github.com/BrightTech10/alx-system_engineering-devops/blob/main/0x05-processes_and_signals/manage_my_process).
        - Creates a file containing its PID in ``/var/run/my_process.pid``.
        - Displays ``manage_my_process started``.
    - When passed the argument stop:
        - Stops [manage_my_process](https://github.com/BrightTech10/alx-system_engineering-devops/blob/main/0x05-processes_and_signals/manage_my_process)manage_my_process.
        - Deletes the file ``/var/run/my_process.pid``.
        - Displays ``manage_my_process stopped``.
    - When passed the argument restart:
        - Stops [manage_my_process](https://github.com/BrightTech10/alx-system_engineering-devops/blob/main/0x05-processes_and_signals/manage_my_process).
        - Deletes the file ``/var/run/my_process.pid``.
        - Starts [manage_my_process](https://github.com/BrightTech10/alx-system_engineering-devops/blob/main/0x05-processes_and_signals/manage_my_process).
        - Creates a file containing its PID in ``/var/run/my_process.pid``.
        - Displays ``manage_my_process started``.
    - Otherwise, displays ``Usage: manage_my_process {start|stop|restart}``.

- Task 11
    - [102-zombie.c](https://github.com/BrightTech10/alx-system_engineering-devops/blob/main/0x05-processes_and_signals/102-zombie.c): C program that creates five zombie processes.
    - For every zombie created, ``displays Zombie process created, PID: <ZOMBIE_PID>``.
