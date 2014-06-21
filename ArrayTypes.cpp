//
//  CharacterArray.cpp
//  c++_Primer_chapter_3
//
//  Created by Bellchan on 5/17/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "ArrayTypes.h"
#include<cstddef>
#include<vector>
using namespace std;

ArrayTypes::ArrayTypes(){
    
    
    unsigned int cnt =42;
    constexpr unsigned sz = 42;
    int arr[10]; // array of 10 ints
    int *parr[sz]; // array of 42 pointers to an int
    int *ptrs[10]; // ptrs is an array of 10 pointers to an int
    
    /******************************* Complicated Array Declarations *************************************/
    int (*parrays)[10] = &arr; // parrays is a pointer that points to an array 10 ints
    int(*matrix)[20]; // Pointer to an array of 20 ints
    
    
    /*******************
     Note: There is no array of reference because reference is not an object. Ex. (int &refs[10])
     ******************/
    int (&arrRef)[10] = arr; // arrRef referes to an array of ten ints
    
    //int &refs[10]; // this is an error. There is no array of reference ----->>> watch out for these
    
    int *(&prefarray)[10] = ptrs; // prefarray is a reference to an array of ten pointers
    
    
  
    constexpr size_t array_size = 10; // size_t is a machine specific unsigned type tha is guaranteed tobe large enough to hold the size of any object in memory
    int ai [array_size];
    for(size_t ix = 1; ix <= array_size; ix++){
        ai[ix] = ix;
    }
    
    for(auto i : ai){
        //cout<<i<<endl;
    }
    
    
    
    
    /*************************** C-Style Character Strings *****************************/
    
    
    /*********************************************
     NOTE:
     Character Array has a null terminated character (\0).
     String Literal is also a character array. That means every string literal has a null terminated character.
     ************************************************/
    
    char a1[] = {'c','+','+'}; // List initialiation, no null. The length is 3
    char a2[] = {'c','+','+','\0'}; // List initialization with explicit null (\0). The lenght is 4
    char a3[] = "c++"; // Null terminator automatically added
    
    
    
    /*********************** 
     NOTE:
     It is importatnt to remember  string literals end with a null character(\0)
     **********************/
    const char a4[8] = "Nelzkie"; // error: no space left for null terminated character. array size should be 8

    
    /***********************
     NOTE:
     Comparing  two character array is different from comparing two strings.
     We use functio called strcmp to compare strings. strcmp() returns  if string are equal or a positive or negative value depending whether the first strng is larger or smaller than second string.
     **********************/
    const char ca1[] = "Nelzkie";
    const char ca2[] = "Nelzkie";
    
    
    if(strcmp(ca1, ca2) == 0){
  
    }
 
    
    
    
    /*************************** Pointers and Arrays *****************************/
    
    string strs[] = {"one","two","three"};
    string *ps = &strs[0]; // ps points to the first element of array strs
    string *ps2 = strs; // equivalent to ps2 = &strs[0]. By default, compiler automtically substitutes a pointer to the first element of an array
    
    
    /****************************
     NOTE: There are various implications that operations on
     arrays are really operations on pointers
     *************************/
    
    int numlol[] = {1,2,3,4,5,6,7,8,9,0};
    auto ai2(numlol); // ai2 is an int* that points to the first element of numlol
    
    
    decltype(numlol) ai3 = {1,2,3,4,5,6,7,8,9,0}; // The type returned by decltype is not pointer but an array of 10 ints
    //ai3 = ps; // error: cant assign an int* to an array type
    
    
    
    /****************** Moving from one element to another in array ***********************/
    
    int arr2[] = {0,1,2,3,4,5,6,7,8,9};
    int *p  = arr2;// points to arr2[0]
    ++p; // points to arr2[1]
    
    int *e2 = &arr2[10]; // pointer just pass the last element in arr2
    cout<<" pointer obtaining the (off-the-end pointer) : " << *e2 <<"\n\n"<<endl;
    
    
    for(int *b = arr2; b != e2; ++b ){
        //cout<< *b <<endl;
    }
    
    
    /****************** Begin and End functions ***********************/
    

    int arr3[] = {0,1,2,3,4,5,6,7,8,9};
    int *last2 = &arr3[10]; // pointer one past  the last element of array ar3
    int *beg = begin(arr3); // pointer to the first element of array ar3
    int *last = end(arr3); // pointer one past  the last element of array ar3

    
    if(*beg != *last){
        cout<< "correct  "<< *beg << "  " << *last << "   " << *last2 <<endl;
    }
    
    
    
    /****************** Pointer Arithmetic ***********************/
    
    cout<< "\n\n/****************** Pointer Arithmetic ***********************/"<<endl;
    int wow[5] = {1,2,3,4,5};
    int *pot = wow;
    int *pot2 = pot + 4;

    cout<< *pot2 << endl;
    
    
    
    /*************************************
     
     NOTE:
     The result of subtracting two pointers is ptrdiff_t. Just like size_t, it is a machine specific type that can yield a negative result. ptrdiff_t is a signed integral type
     
     *************************************/
    auto nn = end(wow) - begin(wow); // as with iterators; subtracting pointers gives the distance between those pointers

    
    
    int lastic = *(wow + 4);// means calculates the address four elements past the wow array and dereference it and pass the result to lastic variable. same as writing lastic = wow[4];
    cout<< lastic <<endl;
    
    
    
    
}