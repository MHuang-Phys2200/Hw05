radius: radius.c distance.c area.c geom.h 
	clang -Wall -o radius radius.c distance.c area.c -lm
	
clean: hw05
	rm -f radius
	

