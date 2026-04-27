/*Deoxyribonucleic acid(DNA) is a chemical found in the nucleus of cells and carries the "instructions" for the development and functioning of living organisms.

If you want to know more : http://en.wikipedia.org/wiki/DNA

In DNA strings, symbols "A" and "T" are complements of each other, as "C" and "G".Your function receives one side of the DNA(string, except for Haskell); you need to return the other complementary side.DNA strand is never empty or there is no DNA at all(again, except for Haskell).

More similar exercise are found here : http://rosalind.info/problems/list-view/ (source)

Example: (input-- > output)

"ATTGC" -- > "TAACG"
"GTAT" -- > "CATA"*/

#include <iostream>
#include <string>

std::string DNAStrand(const std::string& dna)
{
	std::string result = dna;
	for (size_t i{}; i < dna.size(); i++) {
		if (result[i] == 'A') {
			result[i] = 'T';
		}
		else if (result[i] == 'T') {
			result[i] = 'A';
		}
		if (result[i] == 'C') {
			result[i] = 'G';
		}
		else if (result[i] == 'G') {
			result[i] = 'C';
		}
	}
	return result;
	//your code here
}

int main() {
	auto test1 = DNAStrand("ATTGC");
	auto test2 = DNAStrand("GTAT");
	std::cout << test1 << "\t" << test2;
}