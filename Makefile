CFLAGS=-std=c++11 -Wall -I. -I./tests
CXX=g++ $(CFLAGS) -c 
LD=g++ -o
TARGET = test-point

all: $(TARGET)

$(TARGET): $(TARGET).out
	./$(TARGET).out

$(TARGET).out: $(TARGET).o Point.o
	$(LD) $@ $^

$(TARGET).o: $(TARGET).cpp Point.cpp Point.h
	$(CXX) $<

Point.o: Point.cpp Point.h
	$(CXX) $<

# Tests unitaires
DOSSIER_TESTS = ./tests
TARGET_TESTS = $(DOSSIER_TESTS)/testsUnitaires.out
LISTE_TESTS = $(DOSSIER_TESTS)/testUnitaireQ1.out $(DOSSIER_TESTS)/testUnitaireQ2.out $(DOSSIER_TESTS)/testUnitaireQ3.out $(DOSSIER_TESTS)/testUnitaireQ4.out $(DOSSIER_TESTS)/testUnitaireQ5.out $(DOSSIER_TESTS)/testUnitaireQ6.out
LISTE_TESTS_SRC := $(wildcard $(DOSSIER_TESTS)/*.cpp)
LISTE_TESTS_OBJ := $(patsubst %.cpp, %.o, $(LISTE_TESTS_SRC))
#$(info LISTE_TESTS : $(LISTE_TESTS))

tests: $(TARGET_TESTS)
	$(TARGET_TESTS) -l; \
	$(TARGET_TESTS)

test-q1: $(DOSSIER_TESTS)/testUnitaireQ1.out
	$(DOSSIER_TESTS)/testUnitaireQ1.out

test-q2: $(DOSSIER_TESTS)/testUnitaireQ2.out
	$(DOSSIER_TESTS)/testUnitaireQ2.out

test-q3: $(DOSSIER_TESTS)/testUnitaireQ3.out
	$(DOSSIER_TESTS)/testUnitaireQ3.out

test-q4: $(DOSSIER_TESTS)/testUnitaireQ4.out
	$(DOSSIER_TESTS)/testUnitaireQ4.out

test-q5: $(DOSSIER_TESTS)/testUnitaireQ5.out
	$(DOSSIER_TESTS)/testUnitaireQ5.out

test-q6: $(DOSSIER_TESTS)/testUnitaireQ6.out
	$(DOSSIER_TESTS)/testUnitaireQ6.out

$(TARGET_TESTS): $(LISTE_TESTS_OBJ) Point.o
	$(LD) $@ $^

$(DOSSIER_TESTS)/testUnitaireQ1.out: $(DOSSIER_TESTS)/testsUnitaires.o $(DOSSIER_TESTS)/testUnitaireQ1.o Point.o
	$(LD) $@ $^

$(DOSSIER_TESTS)/testUnitaireQ2.out: $(DOSSIER_TESTS)/testsUnitaires.o $(DOSSIER_TESTS)/testUnitaireQ2.o Point.o
	$(LD) $@ $^

$(DOSSIER_TESTS)/testUnitaireQ3.out: $(DOSSIER_TESTS)/testsUnitaires.o $(DOSSIER_TESTS)/testUnitaireQ3.o Point.o
	$(LD) $@ $^

$(DOSSIER_TESTS)/testUnitaireQ4.out: $(DOSSIER_TESTS)/testsUnitaires.o $(DOSSIER_TESTS)/testUnitaireQ4.o Point.o
	$(LD) $@ $^

$(DOSSIER_TESTS)/testUnitaireQ5.out: $(DOSSIER_TESTS)/testsUnitaires.o $(DOSSIER_TESTS)/testUnitaireQ5.o Point.o
	$(LD) $@ $^

$(DOSSIER_TESTS)/testUnitaireQ6.out: $(DOSSIER_TESTS)/testsUnitaires.o $(DOSSIER_TESTS)/testUnitaireQ6.o Point.o
	$(LD) $@ $^

$(DOSSIER_TESTS)/testsUnitaires.o: $(DOSSIER_TESTS)/testsUnitaires.cpp Point.cpp Point.h
	$(CXX) -o $@ $<

$(DOSSIER_TESTS)/testUnitaireQ1.o: $(DOSSIER_TESTS)/testUnitaireQ1.cpp Point.cpp Point.h
	$(CXX) -o $@ $<

$(DOSSIER_TESTS)/testUnitaireQ2.o: $(DOSSIER_TESTS)/testUnitaireQ2.cpp Point.cpp Point.h
	$(CXX) -o $@ $<

$(DOSSIER_TESTS)/testUnitaireQ3.o: $(DOSSIER_TESTS)/testUnitaireQ3.cpp Point.cpp Point.h
	$(CXX) -o $@ $<

$(DOSSIER_TESTS)/testUnitaireQ4.o: $(DOSSIER_TESTS)/testUnitaireQ4.cpp Point.cpp Point.h
	$(CXX) -o $@ $<

$(DOSSIER_TESTS)/testUnitaireQ5.o: $(DOSSIER_TESTS)/testUnitaireQ5.cpp Point.cpp Point.h
	$(CXX) -o $@ $<

$(DOSSIER_TESTS)/testUnitaireQ6.o: $(DOSSIER_TESTS)/testUnitaireQ6.cpp Point.cpp Point.h
	$(CXX) -o $@ $<

clean:
	rm -f $(TARGET).out $(TARGET_TESTS) $(LISTE_TESTS) $(LISTE_TESTS_OBJ) *.o *.*~
