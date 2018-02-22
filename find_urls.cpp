#include <algorithm>
#include <string>
#include <vector>

#include "url_beg.h"
#include "url_end.h"

typedef std::string::const_iterator iter;

std::vector<std::string> find_urls(const std::string& input){
    std::vector<std::string> ret;
    iter beg = input.begin();
    iter end = input.end();

    // Look through entier input
    while (beg != end){
        // Look for one or more letters followed by ://
        beg = url_beg(beg, end);

        // if we found it
        if (beg != end){
            // get the rest of the url
            iter after = url_end(beg, end);

            // remember the url
            ret.push_back(std::string(beg, after));

            // advance beg and check for more urls on this line
            beg = after;
        }
    }

    return ret;
}
