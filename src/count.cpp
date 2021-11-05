/*********************************************************************************
 * @copyright Copyright (c) 2021 by Guilherme Shimabuko - Shima's Digital Hardware
 *
 *     Redistribution and use in source and binary forms, with or without
 *     modification, are permitted provided that the following conditions
 *     are met:
 *     
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *
 *     * Neither the name of Shima's DIgital Hardware  nor the names of its
 *       contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 *     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 *     IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 *     TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTI-
 *     CULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL SHIMA'S DIGITAL HARDWARE
 *     BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
 *     CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
 *     SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
 *     INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
 *     CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *     ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF 
 *     THE POSSIBILITY OF SUCH DAMAGE.
 *
 *********************************************************************************
 *
 * @file count.cpp
 * @brief Implementation of a counter program
 *
 * @details This file implements an algorithm that counts from 1 to 100.
 *          For each multiple of 3, it prints "Foo" instead of the number.
 *          For each multiple of 5, it prints "Baa" instead of the number.
 *          For multiples of 3 and 5 simultaneously, print "FooBaa", instead of the
 *          number.xxx
 *
 * @author Guilherme Shimabuko
 * 
 * date of last update in yy-mm-dd format
 *
 * @date 2021-11-04
 *
 * @version 1.00
 * 
 *      Version History
 *
 *      Version     Date            Author          Changes
 *
 *      1.00        2021-11-04      GSHIMABUKO      First implementation
 *
 *********************************************************************************
 */


#include <iostream>

void count(){
    for (int i = 1; i <= 100; i++)
    {
        if ((i % 3 != 0) && (i % 5 != 0))
        {
            std::cout << i << std::endl;
        }
        else
        {
            if(i % 3 == 0)
            {
                std::cout << "Foo";
            }
            if (i % 5 == 0)
            {
                std::cout << "Baa";
            }
            std::cout << std::endl;
        }
    }
}
