compile:
	@echo "Compiling"
	@g++ main.cpp HammingEnc.cpp HammingDec.cpp -o out.o

run:
	@echo "Running"
	@./out.o
