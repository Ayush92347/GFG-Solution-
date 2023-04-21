class Solution {

	public:			int characterReplacement(string s, int k){

        int l=0,r=0,freq[26]={0},n=s.length(),maxFreq=0,ans=0;

        while(r<n){

            maxFreq=max(maxFreq,++freq[s[r]-'A']);

            if(r-l+1 - maxFreq > k){

                freq[s[l++]-'A']--;

            }

            ans=max(ans,r-l+1);

            r++;

        }

        return ans;

    }

};
