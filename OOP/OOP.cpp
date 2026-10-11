
#include<iostream>
#include"clsString.h";
using namespace std;

// String library project.....

int main()
{
    clsString String1;

    clsString String2("Mohammed");

    String1.Value = "Ali Ahmed";

    cout << "String1 = " << String1.Value << endl;
    cout << "String2 = " << String2.Value << endl;

    cout << "Number of words: " << String1.CountWords() << endl;
    //static function call
    cout << "Number of words: " << String1.CountWords("Fadi ahmed rateb omer") << endl;

    cout << "Number of words: " <<
        clsString::CountWords("Ahmed Alaa Ali") << endl;

    //----------------
    clsString String3("hi how are you?");

    cout << "String 3 = " << String3.Value << endl;

    cout << "String Length = " << String3.Length() << endl;

    String3.UpperFirstLetterOfEachWord();
    cout << String3.Value << endl;

    //----------------

    String3.LowerFirstLetterOfEachWord();
    cout << String3.Value << endl;

    //----------------

    String3.UpperAllString();
    cout << String3.Value << endl;

    //----------------

    String3.LowerAllString();
    cout << String3.Value << endl;

    //----------------

    cout << "After inverting a : "
        << clsString::InvertLetterCase('a') << endl;

    //----------------

    String3.Value = "AbCdEfg";

    String3.InvertAllLetterCase();
    cout << String3.Value << endl;

    String3.InvertAllLetterCase("xrAmeoOOndK");
    cout << String3.Value << endl;

    //----------------

    cout << "Capital Letters count : "
        << clsString::CountLetter("Mohammed Abu-Hadhoud", clsString::capitalLetter)
        << endl << endl;

    //----------------

    String3.Value = "Welcome to Jordan";
    cout << String3.Value << endl;

    cout << "Capital Letters count :" << String3.CountCapitalLetters() << endl;

    //----------------

    cout << "Small Letters count :" << String3.CountSmallLetters() << endl;

    //----------------

    cout << "vowels count :" << String3.CountVowels() << endl;

    //----------------

    cout << "letter E count :" << String3.CountSpecificLetter('E', false) << endl;

    //----------------

    cout << "is letter u vowel? " << clsString::IsVowel('a')
        << endl;

    //----------------

    cout << "Words Count" << String3.CountWords()
        << endl;

    //----------------


    vector<string> vString;

    vString = String3.SplitString(" ");

    cout << "\nTokens = " << vString.size() << endl;

    for (string& s : vString)
    {
        cout << s << endl;
    }

    //----------------

    //Tirms
    String3.Value = "    Ahmed Alaa Ali     ";
    cout << "\nString     = " << String3.Value;

    String3.Value = "    Ahmed Alaa Ali    ";
    String3.TrimLeft();
    cout << "\n\nTrim Left  = " << String3.Value;

    //----------------

    String3.Value = "    Ahmed Alaa Ali    ";
    String3.TrimRight();
    cout << "\nTrim Right = " << String3.Value;

    //----------------

    String3.Value = "    Ahmed Alaa Ali     ";
    String3.Trim();
    cout << "\nTrim       = " << String3.Value;

    //----------------

    //Joins
    vector<string> vString1 = { "Mohammed","Ahmed","Ali","Maher" };

    cout << "\n\nJoin String From Vector: \n";
    cout << clsString::JoinString(vString1, " ");


    string arrString[] = { "Mohammed","Ahmed","Ali","Maher" };

    cout << "\n\nJoin String From array: \n";
    cout << clsString::JoinString(arrString, 4, " ");

    //----------------

    String3.Value = "Ahmed Alaa Ali";
    cout << "\n\nString     = " << String3.Value;

    String3.ReverseWordsInString();
    cout << "\nReverse Words : " << String3.Value
        << endl;

    //---------------

    String3.Value = "Ahmed Alaa Ali";
    cout << "\nReplace : " << String3.ReplaceWord("Mohammed", "Sari")
        << endl;

    //---------------

    String3.Value = "This is: a sample text, with punctuations.";
    cout << "\n\nString     = " << String3.Value;

    String3.RemovePunctuations();
    cout << "\nRemove Punctuations : " << String3.Value
        << endl;
    //----------------------------------------------------
    // static function call another way.......


    /*clsString S1;

    S1.Value = "Ahmed alaa";
    cout << "Initial Value: " << S1.Value << "\n\n";

    cout << "--- First Letter of Each Word ---\n";
    S1.PrintFirstLetterOfEachWord();

    cout << "\n----------------------------------------------------------\n";

    cout << "--- Capitalize First Letters ---\n";

    S1.UpperFirstLetterOfEachWord();
    cout << "\nAfter Upper First Letter(Object): "
        << S1.Value << endl;

    cout << "\nStatic function Call            : " <<
        clsString::UpperFirstLetterOfEachWord("studied computer science") << endl;
    cout << "\n----------------------------------------------------------\n";
    cout << "--- Lower First Letters---\n\n";
    S1.LowerFirstLetterOfEachWord();
    cout << "After Lower First Letter (Object): " << S1.Value << endl;

    cout << "\nStatic function Call           : " <<
        clsString::LowerFirstLetterOfEachWord("studied computer science") << endl;

    cout << "\n----------------------------------------------------------\n";

    cout << "-- Lower All Letters ---\n\n";
    S1.Value = "WELCOME TO C++ PROGRAMMING";
    S1.LowerAllString();
    cout << "After Lower All (Object): " << S1.Value << endl;
    cout << "\nStatic function Call   : " <<
        clsString::LowerAllString("ABC DEF GHI") << endl;
    cout << "\n----------------------------------------------------------\n";
    cout << "--- Invert Case ---\n\n";
    S1.Value = "AbCdEf";
    S1.InvertAllLetterCase();
    cout << "After Invert Case          : " << S1.Value << endl;
    cout << "\nStatic function call Invert: "
        << clsString::InvertAllLetterCase("Hello World!") << endl;


    cout << "\n----------------------------------------------------------\n\n";
    S1.Value = "Jordan Amman 2026!";
    cout << "Initial Value    : " << S1.Value << endl;
    cout << "\nCapital Letters  : " << S1.CountCapitalLetters() << endl;
    cout << "Small Letters    : " << S1.CountSmallLetters() << endl;
    cout << "All Characters   : " << S1.CountLetter() << endl;

    cout << "\n\nStatic function call: \n\n";
    cout << "Capital Letters  : " << clsString::CountCapitalLetters("Jordan Amman 2026!") << endl;
    cout << "Small Letters    : " << clsString::CountSmallLetters("Jordan Amman 2026!") << endl;
    cout << "All Characters   : " << clsString::CountLetter("Jordan Amman 2026!") << endl;

    cout << "\n----------------------------------------------------------\n\n";

    S1.Value = "Jordan Amman aaa shd AdA";
    cout << "Object:\n";
    cout << "\nCount letter 'a'(Case-Sensitive)  : "
        << S1.CountSpecificLetter('a', false) << endl;
    cout << "\nCount letter 'a'(Case-InSensitive): "
        << S1.CountSpecificLetter('a') << endl;

    cout << "\n\nStatic function call: \n\n";

    cout << "\nCount letter 'a'(Case-Sensitive)  : "
        << S1.CountSpecificLetter(S1.Value, 'a', false) << endl;
    cout << "\nCount letter 'a'(Case-InSensitive): "
        << S1.CountSpecificLetter(S1.Value, 'a') << endl;

    S1.Value = "Education Is An Open Outlet";

    cout << "\nVowels Count: " << S1.CountVowels() << endl;
    cout << "List of Vowels: "; S1.PrintVowels();

    cout << "\n\nStatic function call: \n\n";

    cout << "\nVowels Count: " << S1.CountVowels("Jordan Amman aaa shd AdA") << endl;
    cout << "List of Vowels: "; S1.PrintVowels("Jordan Amman aaa shd AdA");
    cout << "\n----------------------------------------------------------\n";*/

	return 0;
}