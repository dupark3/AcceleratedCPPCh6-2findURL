#include <algorithm> // search
#include <cctype> // isalpha
#include <string>

#include "url_beg.h"
#include "url_end.h"

std::string::const_iterator url_beg(std::string::const_iterator beg, std::string::const_iterator end){
    static const std::string sep = "://";

    typedef std::string::const_iterator iter;

    // i marks where the separator was found
    iter i = beg;

    while ((i = std::search(i, end, sep.begin(), sep.end())) != end) {

        // make sure the separator isn't at the beginning or the end of the line
        if (i != beg && i + sep.size() != end) {

            // begProtocol marks the beginning of the protocol name (e.g. https)
            iter begProtocol = i;
            while (begProtocol != beg && isalpha(begProtocol[-1]))
                --begProtocol;

            // is there at least one appropriate character before and after the separator?
            if (begProtocol != i && !not_url_char(i[sep.size()]))
                return begProtocol;
        }

        // the separator we found wasn't part of a url; advance i past this separator
        i += sep.size();
    }
    return end;
}
