cc=gcc
#LDFLAGS +=  -lpthread -ls3
exe=main
obj=access.o
resource=access.c
$(exe):$(obj)
	$(cc) -o $(exe) $(obj) $(LDFLAGS)
$(obj):$(resource)
	$(cc) -c $(resource)
clean:
	rm -rf *.o main
