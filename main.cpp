#include <iostream>
#include <string>
#include <vector>

#include "find_urls.h"

// TEST STRING: <table border="0" cellpadding="2" cellspacing="3"><tr><td><img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTlnD85GUloeUdfPcCGhKzbsUVHa1KcMguojZH_YhtZrb_hYsRWXUhOKcG1_sG3xf7mgPpKNdVJ-bg" border="1"></td><td><ol style="list-style: none; margin: 0; padding: 0;"><strong><li><a href="https://arstechnica.com/tech-policy/2018/02/why-ajit-pai-might-fail-in-quest-to-block-state-net-neutrality-laws/" target="_blank">Why states might win the net neutrality war against the FCC</a>&nbsp;&nbsp;<font color="#6f6f6f">Ars Technica</font></li></strong><li><a href="https://www.npr.org/sections/thetwo-way/2018/02/22/587896608/fccs-repeal-of-net-neutrality-on-track-to-go-into-effect-in-april" target="_blank">FCC's Repeal Of Net Neutrality On Track To Go Into Effect In April</a>&nbsp;&nbsp;<font color="#6f6f6f">NPR</font></li><li><a href="https://www.buzzfeed.com/daveyalba/date-net-neutrality-rules-will-be-repealed" target="_blank">Net Neutrality Rules Will Start To Die On April 23</a>&nbsp;&nbsp;<font color="#6f6f6f">BuzzFeed News</font></li><li><a href="https://www.wired.com/story/as-protection-ends-heres-one-way-to-test-for-net-neutrality/" target="

typedef std::vector<std::string>::size_type vec_size;

int main() {
    // Only testing one line of input at first:
    std::cout << "Enter RSS feed to find URLs" << std::endl;
    std::string input;
    std::cin >> input;

    std::vector<std::string> urls = find_urls(input);

    // Print results and number each url
    for(vec_size i = 0; i != urls.size(); ++i)
        std::cout << "URL #" << i << ": "
                  << urls[i]
                  << std::endl;

    return 0;
}
