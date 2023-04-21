class Solution{

    public:

        bool areAnagrams(Node *root1, Node *root2)

    {

        if(!root1 && !root2)

        {

            return true;

        }

        queue<Node*> q1, q2; 

        q1.push(root1);

        q2.push(root2);

        while(!q1.empty() && !q2.empty())

        {

            int n1 = q1.size();

            int n2 = q2.size();

            set<int> s1, s2;

            for(int i=0;i<n1;i++)

            {

                auto temp1 = q1.front();

                q1.pop();

                s1.insert(temp1->data);

                if(temp1->left)

                    q1.push(temp1->left);

                if(temp1->right)

                    q1.push(temp1->right);

            }

            for(int i=0;i<n2;i++)

            {

                auto temp1 = q2.front();

                q2.pop();

                s2.insert(temp1->data);

                if(temp1->left)

                    q2.push(temp1->left);

                if(temp1->right)

                    q2.push(temp1->right);

            }

            if(s1!=s2)

                return false;

        }

        return true;

    }

};
