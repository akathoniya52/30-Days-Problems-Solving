C. Vasya and String
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
High school student Vasya got a string of length n as a birthday present. This string consists of letters 'a' and 'b' only. Vasya denotes beauty of the string as the maximum length of a substring (consecutive subsequence) consisting of equal letters.

Vasya can change no more than k characters of the original string. What is the maximum beauty of the string he can achieve?

Input
The first line of the input contains two integers n and k (1 ≤ n ≤ 100 000, 0 ≤ k ≤ n) — the length of the string and the maximum number of characters to change.

The second line contains the string, consisting of letters 'a' and 'b' only.

Output
Print the only integer — the maximum beauty of the string Vasya can achieve by changing no more than k characters.

Examples
inputCopy
4 2
abba
outputCopy
4
inputCopy
8 1
aabaabaa
outputCopy
5

Solution->
  simple - O(n)


const str = "bbbbabbbbbaabbbabbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbabbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbab";
const k = 7
const n = str.length;

function calculateTheBeutyOfString(str,k,n){
  if(k==n){
    return n;
  }
    const trackObj = {
        a:0,
        b:0,
    }
    let l=0,r=0;
    let result = 0;
    while(l<n && r<n){
        trackObj[str[r++]]++;
        if( Math.min(trackObj.a, trackObj.b) <=k ){
            result = Math.max(result,r-l);
        }else{
            trackObj[str[l]]--;
            l++;
        }
    }
    return result;
}

console.log(calculateTheBeutyOfString(str,k,n))
