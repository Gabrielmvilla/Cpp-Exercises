/*
 * ### Function to add a prefix and a suffix in an integer array ###
 * 
 * This can work as a template for a function to make some changes to
 * any array, using pointers.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 */

#include <iostream>
using std::cout; using std::endl;

int* addInfo(int *arrayAddress, int *elements); // Function to manipulate one array.

void printArray(int *arrayAddressP, int *elementsP); // Function to print one array in the terminal.

int main()
{
	int originalArray[] = { 999, 999, 999, 999 };
    int sizeArray = 4;
    int* newArrayAddress;
    
    cout << "Original Array: " << endl;
    printArray(&originalArray[0], &sizeArray);
    
    newArrayAddress = addInfo(&originalArray[0], &sizeArray); // The function returns only an address.
    
    cout << "Complete Array: " << endl;
    printArray(newArrayAddress, &sizeArray);
    
    delete[] newArrayAddress; // Deallocates the memory used after using the array.
    newArrayAddress = NULL; // Stops using the address that does not belong to this program anymore.
}

int* addInfo(int *arrayAddress, int *elements)
{
    int prefixArray[] = { 2, 3, 5, 7, 11 , 13, 17, 19, 23, 29 };
    int suffixArray[] = { 31, 37, 41, 43, 47, 53, 59, 61, 67, 71 };
    int elemPrefix = 10;
    int elemSuffix = 10;
    
    int elemTotal = *elements + elemPrefix + elemSuffix;
    int* completeArray = new int[elemTotal]; // After using the new array in main(), memory needs to be freed (delete[] command).
    
    for (int fh = 0; fh < elemPrefix ; fh++) // Starts copying the prefix to the new array.
    {
        completeArray[fh] = prefixArray[fh];
    }
    
       for (int fh = elemPrefix; fh < (*elements + elemPrefix) ; fh++) // Then, copies the original to the new array.
    {
        completeArray[fh] = *(arrayAddress+(fh-elemPrefix));
    }
    
    for (int fh = (*elements + elemPrefix); fh < elemTotal ; fh++) // Copies the suffix to the new array.
    {
        completeArray[fh] = suffixArray[fh-(*elements + elemPrefix)];
    }
    
    *elements = elemTotal; // Updates the size.
    return &completeArray[0]; // Returns the address to the new array.
}

void printArray(int *arrayAddressP, int *elementsP)
{
    for (int fh = 0; fh < (*elementsP) ; fh++)
    {
        cout << arrayAddressP[fh] << ", ";
    }
    cout << "\b\b" << " " << endl << endl; //delete the last ',' and gives some space
}
