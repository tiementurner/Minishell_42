# minishell
github.com/gbouwen and I made our own little bash for educational reasons.

#install
how to install: first run command : <git clone https://github.com/tiementurner/Minishell_42.git> and then run command : <make>

#Builtins
Our implementation has 5 builtin commands. You can obviously use every other command/executable you have installed.

Echo with -n(no newline) as option
cd with only a relative or absolute path
pwd without any options
export without any options
unset without any options
env without any options and any arguments
exit without any options
quotes work like in bash except for multiline commands.

#functionalities
';' seperates commands like in bash.

Pipes '|' work like in bash.

Environment variables including $? work like in bash.

The signals ctrl-c, ctrl-d and ctrl-\ all have nearly the same result as in bash.

The redirections we have implemented are : '>' '<' and '>>'.
