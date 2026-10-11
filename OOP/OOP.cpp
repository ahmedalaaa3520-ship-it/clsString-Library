#include <iostream>
#include "clsString.h"
using namespace std;

// clsString library demo

int main()
{
    clsString String1;
    clsString String2("Mohammed");

    String1.Value = "Ali Ahmed";

    cout << "String1 = " << String1.Value << endl;
    cout << "String2 = " << String2.Value << endl;

    // Counting words (object version, then static versions)
    cout << "Number of words: " << String1.CountWords() << endl;
    cout << "Number of words: " << clsString::CountWords("Fadi ahmed rateb omer") << endl;
    cout << "Number of words: " << clsString::CountWords("Ahmed Alaa Ali") << endl;

    //----------------
    clsString String3("hi how are you?");
    cout << "\nString3 = " << String3.Value << endl;
    cout << "String Length = " << String3.Length() << endl;

    String3.UpperFirstLetterOfEachWord();
    cout << "Upper first letters: " << String3.Value << endl;

    String3.LowerFirstLetterOfEachWord();
    cout << "Lower first letters: " << String3.Value << endl;

    String3.UpperAllString();
    cout << "Upper all          : " << String3.Value << endl;

    String3.LowerAllString();
    cout << "Lower all          : " << String3.Value << endl;

    //----------------
    cout << "\nInvert 'a'         : " << clsString::InvertLetterCase('a') << endl;

    String3.Value = "AbCdEfg";
    String3.InvertAllLetterCase();
    cout << "Invert (object)    : " << String3.Value << endl;

    // The static version returns the result, it does not change the object
    cout << "Invert (static)    : " << clsString::InvertAllLetterCase("xrAmeoOOndK") << endl;

    //----------------
    cout << "\nCapital letters in \"Mohammed Abu-Hadhoud\": "
        << clsString::CountLetter("Mohammed Abu-Hadhoud", clsString::capitalLetter) << endl;

    String3.Value = "Welcome to Jordan";
    cout << "\nString3 = " << String3.Value << endl;
    cout << "Capital letters count : " << String3.CountCapitalLetters() << endl;
    cout << "Small letters count   : " << String3.CountSmallLetters() << endl;
    cout << "Vowels count          : " << String3.CountVowels() << endl;
    cout << "Letter 'E' count      : " << String3.CountSpecificLetter('E', false) << endl;
    cout << "Is 'a' a vowel?       : " << clsString::IsVowel('a') << endl;
    cout << "Words count           : " << String3.CountWords() << endl;

    //----------------
    vector<string> vString = String3.SplitString(" ");
    cout << "\nTokens = " << vString.size() << endl;
    for (string& s : vString)
    {
        cout << s << endl;
    }

    //---------------- Trims
    String3.Value = "    Ahmed Alaa Ali     ";
    cout << "\nString     = [" << String3.Value << "]";

    String3.TrimLeft();
    cout << "\nTrim Left  = [" << String3.Value << "]";

    String3.Value = "    Ahmed Alaa Ali     ";
    String3.TrimRight();
    cout << "\nTrim Right = [" << String3.Value << "]";

    String3.Value = "    Ahmed Alaa Ali     ";
    String3.Trim();
    cout << "\nTrim       = [" << String3.Value << "]";

    //---------------- Joins
    vector<string> vString1 = { "Mohammed", "Ahmed", "Ali", "Maher" };
    cout << "\n\nJoin from vector: " << clsString::JoinString(vString1, " ");

    string arrString[] = { "Mohammed", "Ahmed", "Ali", "Maher" };
    cout << "\nJoin from array : " << clsString::JoinString(arrString, 4, " ");

    //----------------
    String3.Value = "Ahmed Alaa Ali";
    cout << "\n\nString        = " << String3.Value;
    String3.ReverseWordsInString();
    cout << "\nReverse Words = " << String3.Value << endl;

    //---------------- ReplaceWord returns a new string, Value stays unchanged
    String3.Value = "Ahmed Alaa Ali";
    cout << "\nReplace : " << String3.ReplaceWord("Alaa", "Sari") << endl;
    cout << "Value is still: " << String3.Value << endl;

    //----------------
    String3.Value = "This is: a sample text, with punctuations.";
    cout << "\nString              = " << String3.Value;
    String3.RemovePunctuations();
    cout << "\nRemove Punctuations = " << String3.Value << endl;

    //---------------- Print functions
    String3.Value = "Education Is An Open Outlet";
    cout << "\nFirst letters:\n";
    String3.PrintFirstLetterOfEachWord();
    cout << "\nVowels: ";
    String3.PrintVowels();
    cout << endl;

    return 0;
}