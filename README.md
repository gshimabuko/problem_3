# Problem 1 
/********************************************************************************
 * @author  Guilherme Shimabuko - Shima's Digital Hardware
 *
 * @brief   Repository for the second technical challenge of a problem set for a 
 * C++ Software Engineer position at <confidential>
 *          
 *
 * @details This project consists of a C++ program designed to determine whether
 * or not it is possible to go from a string s to a string t by performing exactly
 * k operations if the operation are limited to either removing the last character
 * of the string s, or adding a new character to the end of it.
 * 
 * The src directory contains the files stringManipulation.cpp and test.cpp.
 * The first file implements the ConcatRemove function, which determines whether
 * or not it is possible to go from the string s to the string t with exactly k 
 * operations. The test.cpp file includes a simple test of the function with where
 * pre-determined strings and a pre defined number of actions are passed to the 
 * ConcatRemove function. All parameters of this test are hard-coded.
 *
 * The includes directory has a header file for the ConcatRemove function.
 *
 * The obj file is where the temporary files from the compilation are written. 
 *
 * A makefile is included to compile the project. To compile, simply run the 
 * command "make" on an environment with the g++ compiler. Once compiled, the file * test.out is generated. Running out provides the functions' output.
 *
 * @copyright Copyright (c) 2021 Shima's Digital Hardware
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
 ********************************************************************************
 */

