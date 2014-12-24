out.txt: test Test.txt
	./$+ > $@

test: Test.o Tools.o FastGen.o HardGen.o Parser.o  refalrts.o Library.o LibraryEx.o GlobalGen.o
	g++ -o $@ $+
	
%.o: %.cpp
	g++ -c -o $@ $<

%.cpp: %.sref
	./srefc $<