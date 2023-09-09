#include <iostream>
#include <map>


char letter(std::string MorseWord){
    std::map<std::string, char> letters;
    std::string str ="ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.,?";
    int len = str.length();
    for (int i = 0; i < len; i++){
        switch(i){
            case 0:  letters[".-"]   = str[i]; break;
            case 1:  letters["-..."] = str[i]; break;
            case 2:  letters["-.-."] = str[i]; break;
            case 3:  letters["-.."]  = str[i]; break;
            case 4:  letters["."]    = str[i];break;
            case 5:  letters["..-."] = str[i]; break;
            case 6:  letters["--."]  = str[i];break;
            case 7:  letters["...."] = str[i]; break;
            case 8:  letters[".."]   = str[i];break;
            case 9:  letters[".---"] = str[i]; break;
            case 10: letters["-.-"]  = str[i]; break;
            case 11: letters[".-.."] = str[i]; break;
            case 12: letters["--"]   = str[i]; break;
            case 13: letters["-."]   = str[i];break;
            case 14: letters["---"]  = str[i]; break;
            case 15: letters[".--."] = str[i]; break;       
            case 16: letters["--.-"] = str[i]; break;
            case 17: letters[".-."]  = str[i]; break;
            case 18: letters["..."]  = str[i]; break;
            case 19: letters["-"]    = str[i];   break;
            case 20: letters["..-"]  = str[i]; break;
            case 21: letters["...-"] = str[i]; break;
            case 22: letters[".--"]  = str[i]; break;
            case 23: letters["-..-"] = str[i]; break;
            case 24: letters["-.--"] = str[i]; break;
            case 25: letters["--.."] = str[i]; break;
            case 26: letters["-----"]  = str[i]; break;
            case 27: letters[".----"] = str[i]; break;
            case 28: letters["..---"]  = str[i]; break;
            case 29: letters["...--"] = str[i]; break;
            case 30: letters["....-"] = str[i]; break;
            case 31: letters["....."] = str[i]; break;
            case 32: letters["-...."]  = str[i]; break;
            case 33: letters["--..."] = str[i]; break;
            case 34: letters["---.."]  = str[i]; break;
            case 35: letters["----."] = str[i]; break;
            case 36: letters[".-.-.-"] = str[i]; break;
            case 37: letters["--..--"] = str[i]; break;
            case 38: letters["..--.."] = str[i]; break;            
        }
    }
    return letters[MorseWord];
}


std::string decodeMorse(std::string MorseCode) {

    std::string res = "";
    std::string current = "";
    char previous = ' ';
    bool stop = true;
    int len = MorseCode.length();
    for (int i = 0; i < len; ++i){

        if ((previous == ' ') & (MorseCode[i] == ' ')){
            if (stop){
                continue;
            } else {
                stop = true;
                res += ' ';
            }
        }
        else if (MorseCode[i] == ' '){
            res += letter(current);
            current = "";
            previous = MorseCode[i]; 
        }
        else{
            stop = false;
            previous = MorseCode[i];
            current += MorseCode[i];
        }        
    }
    res += letter(current);
    int res_len = res.size();
    for (int i = (res_len - 2); i > 0; --i){
        if (res[i] == ' '){
            res.erase(i, 1);
        }
        else{
            break;
        }
    }
    return res;
}

int main(){

    std::string result = decodeMorse(".- ... ---     ...     ") + "!";
    std::cout << result;
}
