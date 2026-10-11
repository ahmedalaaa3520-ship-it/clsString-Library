# clsString

## 📌 About | عن المشروع

This is a small string library in C++ that I made while learning OOP. I wrote functions to count letters and words, change letter case, trim spaces, split and join text, and more.

<div dir="rtl">

دي مكتبة صغيرة للتعامل مع النصوص في C++، عملتها وأنا بتعلّم OOP. كتبت فيها functions بتعدّ الحروف والكلمات، وتغيّر حالة الحروف، وتشيل المسافات، وتقسّم النصوص وتدمجها، وغيرها.

</div>

---

## 🎯 What I Learned | اللي اتعلمته

* How to build a class with a property.
* The difference between static functions and object functions.
* Default parameters and enums.
* Using vectors and iterators.
* Pushing my project to GitHub from Visual Studio.

<div dir="rtl">

* إزاي أعمل class وفيه property.
* الفرق بين الـ static functions والـ functions العادية.
* الـ default parameters والـ enums.
* استخدام الـ vector والـ iterators.
* رفع مشروعي على GitHub من Visual Studio.

</div>

---

## 🚀 How to Use It | إزاي تستخدمها

Copy `clsString.h` into your project, then include it:

<div dir="rtl">

انسخ ملف `clsString.h` في مشروعك وبعدين اعمله include:

</div>

```cpp
#include "clsString.h"
```

### Usage Examples | أمثلة الاستخدام

Every function has two versions. The object version changes the text inside the object. The static version takes a text and gives you the result.

<div dir="rtl">

كل function ليها نسختين. النسخة العادية بتغيّر النص اللي جوه الـ object، والنسخة الـ static بتاخد نص وبترجّعلك النتيجة.

</div>

```cpp
clsString s("hello world");

s.UpperAllString();                           // Changes s.Value
string r = clsString::UpperAllString("abc");  // Returns ABC
```

> **Note:** This library currently works only with Visual Studio because it uses `__declspec(property)`.

<div dir="rtl">

**ملاحظة:** المكتبة حاليًا بتشتغل على Visual Studio بس، لأني استخدمت `__declspec(property)`.

</div>

---

## ⚙️ What It Can Do | بتعمل إيه

### 🔢 Count | العدّ

* Count words and letters.
* Count capital and small letters.
* Count vowels.
* Count occurrences of a specific letter.

### 🔠 Change Case | تغيير حالة الحروف

* Convert all letters to uppercase.
* Convert all letters to lowercase.
* Invert letter case.
* Capitalize the first letter of each word.

### 🧹 Clean | التنضيف

* Trim spaces from the left, right, or both sides.
* Remove punctuation.

### ✂️ Split and Join | التقسيم والدمج

* Split a string into a `vector`.
* Join a `vector` or array into a single string.

### 📝 Words | التعامل مع الكلمات

* Reverse the order of words.
* Replace a word with another word.

### 🖨️ Print | الطباعة

* Print the first letter of each word.
* Print vowels.

---

## 💻 Example | مثال

```cpp
#include <iostream>
#include "clsString.h"

using namespace std;

int main()
{
    clsString s("hi how are you?");

    s.UpperFirstLetterOfEachWord();
    cout << s.Value << endl;  // Hi How Are You?

    cout << clsString::CountWords("Ali Ahmed") << endl;  // 2
    cout << clsString::Trim("   Hello   ") << endl;      // Hello

    return 0;
}
```

---

## 🔧 What I Want to Improve | اللي عايز أحسّنه

* Make it compatible with compilers other than Visual Studio.
* Add more functions.
* Test it with more cases.

<div dir="rtl">

* أخلّيها تشتغل على compilers تانية مش Visual Studio بس.
* أضيف functions أكتر.
* أجرّبها على حالات أكتر.

</div>

---

## 👨‍💻 Author

**Ahmed Alaa**
