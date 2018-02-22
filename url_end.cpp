#include <algorithm> //find, find_if
#include <cctype> //isalnum
#include <string>

#include "url_end.h"

bool not_url_char(char c){
    // characters, in addition to alphanumerics, that can appear in a url
    static const std::string url_ch = "~;/?:@=&$-_.+!*'(),";

    // see whether c can appear in a url and return the opposite
    return !(isalnum(c) ||
             std::find(url_ch.begin(), url_ch.end(), c) != url_ch.end());
}

std::string::const_iterator url_end (std::string::const_iterator beg, std::string::const_iterator end){
    return std::find_if(beg, end, not_url_char);
}
