class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int y=0,i=0,j=0,c=0;
        while(i!=sentences.size())
        {
        
            if(sentences[i][j]==' ')
            {
                c++;
            }
                  if(j==sentences[i].size())
                  {
                    c++;
                    i++;
                    j=0;
                    y=max(y,c);
                    c=0;
                  }
                       j++;
        }
        return y;
    }
};