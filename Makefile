out.txt: test Test.txt
	./$+ > $@

test: Test.cpp Tools.cpp FastGen.cpp HardGen.cpp Parser.cpp
	g++ -o $@ $+ refalrts.cpp Library.cpp LibraryEx.cpp

%.cpp: %.sref
	./srefc $<