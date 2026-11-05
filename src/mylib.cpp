#include "../include/mylib.hpp"
namespace mylib {
    
    char* toLower(char str[]){
        int count = 0;
        while( str[count] != '\0'){
            if (str[count] >='A' && str[count] <= 'Z'){
                str[count] = str[count] + 32;
            }
            count = count + 1;
        }
        return str;
    }

    char* toUpper(char str[]){
         int count = 0;
        while( str[count] != '\0'){
            if (str[count] >='a' && str[count] <= 'z'){
                str[count] = str[count] - 32;
            }
            count = count + 1;
        }
        return str;
    }

    char* copy(char str[], char str2[]){
        int count = 0;
        while(str[count] != '\0'){
            str2[count] = str[count];
            count++;
        }
        str2[count] = '\0';
        return str2;
    }

    int length(char str[]){
        int count = 0;
        while(str[count] != '\0'){
            count++;
        }
        return count;
    }

    int compare(char str1[], char str2[]){
        if (length(str1) != length(str2)){
            return 0;
        }
        for (int i = 0; i<length(str1); i++){
            if (str1[i] != str2[i]){
                return 0; 
            }
        }
        return 1;

    }
}