C = gcc
CXX = clang++

SOURCE_C = foo.c
OBJECTS_C = foo.o

SOURCE_CXX = 1.1.cpp

TARGET = 1.1
LDFLAGS_COMMON = -std=c++2a

BIN_FOLDER=bin

all: \
$(BIN_FOLDER)/test1_nullptr \
$(BIN_FOLDER)/test2_constexpr \
$(BIN_FOLDER)/test3_temp_variable_in_if_switch \
$(BIN_FOLDER)/test4_initializer_list \
$(BIN_FOLDER)/test5_struct_binding \
$(BIN_FOLDER)/test6_auto \
$(BIN_FOLDER)/test7_decltype \
$(BIN_FOLDER)/test8_trailing_return_type \
$(BIN_FOLDER)/test9_decltype_auto \
$(BIN_FOLDER)/test10_auto_constexpr \
$(BIN_FOLDER)/test11_local_foreach \
$(BIN_FOLDER)/test12_extern_template \

$(BIN_FOLDER)/test12_extern_template: test12_extern_template.cpp
	@mkdir -p $(BIN_FOLDER)
	$(CXX) test12_extern_template.cpp $(LDFLAGS_COMMON) -o $(BIN_FOLDER)/test12_extern_template

$(BIN_FOLDER)/test11_local_foreach: test11_local_foreach.cpp
	@mkdir -p $(BIN_FOLDER)
	$(CXX) test11_local_foreach.cpp $(LDFLAGS_COMMON) -o $(BIN_FOLDER)/test11_local_foreach

$(BIN_FOLDER)/test10_auto_constexpr: test10_auto_constexpr.cpp
	@mkdir -p $(BIN_FOLDER)
	$(CXX) test10_auto_constexpr.cpp $(LDFLAGS_COMMON) -o $(BIN_FOLDER)/test10_auto_constexpr

$(BIN_FOLDER)/test9_decltype_auto: test9_decltype_auto.cpp
	@mkdir -p $(BIN_FOLDER)
	$(CXX) test9_decltype_auto.cpp $(LDFLAGS_COMMON) -o $(BIN_FOLDER)/test9_decltype_auto

$(BIN_FOLDER)/test8_trailing_return_type: test8_trailing_return_type.cpp
	@mkdir -p $(BIN_FOLDER)
	$(CXX) test8_trailing_return_type.cpp $(LDFLAGS_COMMON) -o $(BIN_FOLDER)/test8_trailing_return_type

$(BIN_FOLDER)/test7_decltype: test7_decltype.cpp
	@mkdir -p $(BIN_FOLDER)
	$(CXX) test7_decltype.cpp $(LDFLAGS_COMMON) -o $(BIN_FOLDER)/test7_decltype

$(BIN_FOLDER)/test1_nullptr: test1_nullptr.cpp
	@mkdir -p $(BIN_FOLDER)
	$(CXX) test1_nullptr.cpp $(LDFLAGS_COMMON) -o $(BIN_FOLDER)/test1_nullptr

$(BIN_FOLDER)/test2_constexpr: test2_constexpr.cpp
	@mkdir -p $(BIN_FOLDER)
	$(CXX) test2_constexpr.cpp $(LDFLAGS_COMMON) -o $(BIN_FOLDER)/test2_constexpr

$(BIN_FOLDER)/test3_temp_variable_in_if_switch: test3_temp_variable_in_if_switch.cpp
	@mkdir -p $(BIN_FOLDER)
	$(CXX) test3_temp_variable_in_if_switch.cpp $(LDFLAGS_COMMON) -o $(BIN_FOLDER)/test3_temp_variable_in_if_switch

$(BIN_FOLDER)/test4_initializer_list: test4_initializer_list.cpp
	@mkdir -p $(BIN_FOLDER)
	$(CXX) test4_initializer_list.cpp $(LDFLAGS_COMMON) -o $(BIN_FOLDER)/test4_initializer_list

$(BIN_FOLDER)/test5_struct_binding: test5_struct_binding.cpp
	@mkdir -p $(BIN_FOLDER)
	$(CXX) test5_struct_binding.cpp $(LDFLAGS_COMMON) -o $(BIN_FOLDER)/test5_struct_binding

$(BIN_FOLDER)/test6_auto: test6_auto.cpp
	@mkdir -p $(BIN_FOLDER)
	$(CXX) test6_auto.cpp $(LDFLAGS_COMMON) -o $(BIN_FOLDER)/test6_auto

clean:
	rm -rf bin
