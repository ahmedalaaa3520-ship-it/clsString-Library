
#pragma once
#include<iostream>
#include<vector>

using namespace std;

class clsString
{
private:

	string _Value;

public:                             

	clsString()
	{
		_Value = "";
	} 

	clsString(string Value)
	{
		_Value = Value;
	}

	void SetValue(string Value)
	{
		_Value = Value;
	}

	string GetValue()
	{
		return _Value;
	}

	__declspec(property(get = GetValue, put = SetValue))string Value;

	static short Length(string S1)
	{
		return S1.length();
	}

	short Length()
	{
		return _Value.length();
	}

	static short CountWords(string S1)
	{
		string delim = " ";
		string sWord;
		short Counter = 0;
		short pos = 0;

		while ((pos = S1.find(delim))!= std::string::npos)
		{
			sWord = S1.substr(0,pos);
			if (sWord != "")
			{
				Counter++;
			}
			S1.erase(0, pos + delim.length());

		}
		if (S1 != "") {
			Counter++;
		}
		return Counter;
	}

	short CountWords()
	{
		return CountWords(_Value);
	}

	static string UpperFirstLetterOfEachWord(string s1)
	{
		bool isFirstLetter = true;

		for (short i = 0; i < s1.length(); i++) {
			if (s1[i] != ' ' && isFirstLetter) {
				s1[i] = toupper(s1[i]);
			}

			isFirstLetter = (s1[i] == ' ' ? true : false);    // short hand if 
		}
		return s1;
	}

	void UpperFirstLetterOfEachWord()
	{
		// no need to return vlaue , this function will dirctly update the obj
		_Value = UpperFirstLetterOfEachWord(_Value);
	}

	static void PrintFirstLetterOfEachWord(string s1)
	{
		bool isFirstLetter = true;

		for (short i = 0; i < s1.length(); i++) {
			if (s1[i] != ' ' && isFirstLetter) {
				cout << s1[i] << endl;
			}

			isFirstLetter = (s1[i] == ' ' ? true : false);    // short hand if 
		}
	}

	void PrintFirstLetterOfEachWord()
	{
		PrintFirstLetterOfEachWord(_Value);
	}
	
	static string LowerFirstLetterOfEachWord(string s1)
	{
		bool isFirstLetter = true;

		for (short i = 0; i < s1.length(); i++) {
			if (s1[i] != ' ' && isFirstLetter) {
				s1[i] = tolower(s1[i]);
			}

			isFirstLetter = (s1[i] == ' ' ? true : false);
		}
		return s1;
	}

	void LowerFirstLetterOfEachWord()
	{
		_Value = LowerFirstLetterOfEachWord(_Value);
	}

	static string UpperAllString(string s1)
	{
		for (short i = 0; i < s1.length(); i++) {
			s1[i] = toupper(s1[i]);
		}
		return s1;
	}

	void UpperAllString()
	{
		_Value = UpperAllString(_Value);
	}
	
	static string LowerAllString(string s1)
	{
		for (short i = 0; i < s1.length(); i++) {
			s1[i] = tolower(s1[i]);
		}
		return s1;
	}

	void LowerAllString()
	{
		_Value = LowerAllString(_Value);
	}

	static char InvertLetterCase(char letter)
	{
		return isupper(letter) ? tolower(letter) : toupper(letter);  // Short hand if
	}

	static string InvertAllLetterCase(string s1)
	{
		for (int i = 0; i < s1.length(); i++)
		{
			s1[i] = InvertLetterCase(s1[i]);
		}
		return s1;
	}

	void InvertAllLetterCase()
	{
		_Value = InvertAllLetterCase(_Value);
	}

	enum enWhatToCount { smallLetter = 0, capitalLetter = 1, All = 3 };

	static short CountLetter(string s1, enWhatToCount WhatToCount = enWhatToCount::All)
	{
		if (WhatToCount == enWhatToCount::All) {
			return s1.length();
		}
		short count = 0;

		for (short i = 0; i < s1.length(); i++) {

			if (WhatToCount == enWhatToCount::capitalLetter && isupper(s1[i])) {
				count++;
			}

			if (WhatToCount == enWhatToCount::smallLetter && islower(s1[i])) {
				count++;
			}
		}
		return count;
	}

	short CountLetter(enWhatToCount WhatToCount = enWhatToCount::All)
	{
		return CountLetter(_Value, WhatToCount = enWhatToCount::All);
	}

	static short CountCapitalLetters(string S1)
	{

		short Counter = 0;

		for (short i = 0; i < S1.length(); i++)
		{

			if (isupper(S1[i]))
				Counter++;

		}
		return Counter;
	}

	short CountCapitalLetters()
	{
		return CountCapitalLetters(_Value);
	}

	static short CountSmallLetters(string S1)
	{

		short Counter = 0;

		for (short i = 0; i < S1.length(); i++)
		{

			if (islower(S1[i]))
				Counter++;

		}
		return Counter;
	} 
	
	short CountSmallLetters()
	{
		return CountSmallLetters(_Value);
	}

	static bool IsVowel(char Ch1)
	{
		Ch1 = tolower(Ch1);
		return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1
			== 'o') || (Ch1 == 'u'));
	}

	static void PrintVowels(string s1)
	{
		for (short i = 0; i < s1.length(); i++) {
			if (IsVowel(s1[i])) {
				cout << s1[i] << "    ";
			}
		}
	}

	void PrintVowels()
	{
		PrintVowels(_Value);
	}

	static short CountVowels(string S1)
	{
		short Counter = 0;
		for (short i = 0; i < S1.length(); i++)
		{
			if (IsVowel(S1[i]))
				Counter++;
		}
		return Counter;
	}

	short CountVowels()
	{
		return CountVowels(_Value);
	}

	static vector<string>SplitString(string s1, string delim)
	{
		vector<string>vString;

		short pos = 0;
		string sWord;
		while ((pos = s1.find(delim)) != std::string::npos) {
			sWord = s1.substr(0, pos);

			if (sWord != "") {
				vString.push_back(sWord);
			}
			s1.erase(0, pos + delim.length());
		}
		if (s1 != "") {
			vString.push_back(s1);
		}
		return vString;
	}

	vector<string>SplitString(string Delim)
	{
		return SplitString(_Value, Delim);
	}

	static short CountSpecificLetter(string S1, char Letter, bool MatchCase = true)
	{

		short Counter = 0;

		for (short i = 0; i < S1.length(); i++)
		{

			if (MatchCase)
			{
				if (S1[i] == Letter)
					Counter++;
			}
			else
			{
				if (tolower(S1[i]) == tolower(Letter))
					Counter++;
			}

		}

		return Counter;
	}

	short CountSpecificLetter(char Letter,bool MatchCase=true)
	{
		return CountSpecificLetter(_Value, Letter, MatchCase);
	}

	static string TrimLeft(string S1)
	{
		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ')
			{
				return S1.substr(i, S1.length() - i);
			}
		}
		return "";
	}

	void TrimLeft()
	{
		_Value = TrimLeft(_Value);
	}

	static string TrimRight(string S1)
	{
		for (short i = S1.length() - 1; i >= 0; i--)
		{
			if (S1[i] != ' ')
			{
				return S1.substr(0, i + 1);
			}
		}
		return "";
	}

	void TrimRight()
	{
		_Value = TrimRight(_Value);
	}

	static string Trim(string S1)
	{
		return (TrimLeft(TrimRight(S1)));

	}

	void Trim()
	{
		_Value = Trim(_Value);
	}

	static string JoinString(vector<string>vString, string Delim)
	{
		if (vString.empty()) return"";
		string s1 = "";
		for (string x : vString) {
			s1 = s1 + x + Delim;
		}
		return s1.substr(0, s1.length() - Delim.length());
	}

	static string JoinString(string arr[], short length, string Delim)
	{
		if (length == 0) return "";

		string s1 = "";
		for (short i = 0; i < length; i++) {
			s1 = s1 + arr[i] + Delim;
		}
		return s1.substr(0, s1.length() - Delim.length());
	}

	static string ReverseWordsInString(string S1)
	{

		vector<string> vString;
		string S2 = "";

		vString = SplitString(S1, " ");

		// declare iterator
		vector<string>::iterator iter = vString.end();

		while (iter != vString.begin())
		{
			--iter;
			S2 += *iter + " ";
		}
		S2 = S2.substr(0, S2.length() - 1); //remove last space.
		return S2;
	}

	void ReverseWordsInString()
	{
		_Value = ReverseWordsInString(_Value);
	}

	static string ReplaceWord(string S1, string StringToReplace, string sRepalceTo, bool MatchCase = true)
	{
		vector<string> vString = SplitString(S1, " ");

		for (string& s : vString)
		{
			if (MatchCase)
			{
				if (s == StringToReplace)
				{
					s = sRepalceTo;
				}
			}
			else
			{
				if (LowerAllString(s) == LowerAllString(StringToReplace))
				{
					s = sRepalceTo;
				}
			}
		}
		return JoinString(vString, " ");
	}

	string ReplaceWord(string StringToReplace, string sRepalceTo)
	{
		return ReplaceWord(_Value, StringToReplace, sRepalceTo);
	}

	static string RemovePunctuations(string S1)
	{
		string S2 = "";

		for (short i = 0; i < S1.length(); i++)
		{
			if (!ispunct(S1[i]))
			{
				S2 += S1[i];
			}
		}
		return S2;
	}

	void RemovePunctuations()
	{
		_Value = RemovePunctuations(_Value);
	}


};


