SRCS = main.c func1.c func2.c func3.c

all :
	gcc $(SRCS) -g

gdb :
	gdb a.out

lldb :
	lldb a.out
