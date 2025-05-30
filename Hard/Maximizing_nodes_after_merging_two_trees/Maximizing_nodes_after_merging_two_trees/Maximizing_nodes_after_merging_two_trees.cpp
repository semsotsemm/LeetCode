#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void buildTreeLevels(vector<vector<int>>& secondTreeLevels, vector<vector<int>>& edges2)
    {
        bool isUnique = true;
        for (int i = 0; i < secondTreeLevels.size(); i++) {
            for (int j = 0; j < edges2.size(); j++) {
                for (int k = 0; k < 2; k++) {
                    if (edges2[j][k] == secondTreeLevels[i][1]) {
                        for (int l = 0; l < secondTreeLevels.size(); l++) {
                            int direction = (k == 0) ? 1 : -1;
                            if (secondTreeLevels[l][1] == edges2[j][k + direction]) {
                                isUnique = false;
                            }
                        }
                        if (isUnique) {
                            vector<int> newLevel;
                            newLevel.push_back(secondTreeLevels[i][0] + 1);
                            newLevel.push_back((k == 0) ? edges2[j][k + 1] : edges2[j][k - 1]);
                            secondTreeLevels.push_back(newLevel);
                        }
                        isUnique = true;
                    }
                }
            }
        }
    }

    vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {
        vector<vector<int>> secondTreeLevels = { {1, 0} };
        vector<int> levelInfo;
        buildTreeLevels(secondTreeLevels, edges2);
        int evenLevelCountSecondTree = 0;
        for (int i = 0; i < secondTreeLevels.size(); i++) {
            if (secondTreeLevels[i][0] % 2 == 0) {
                evenLevelCountSecondTree++;
            }
        }
        vector<vector<int>> firstTreeLevels = { {1, 0} };
        buildTreeLevels(firstTreeLevels, edges1);
        int evenLevelCountFirstTree = 0;
        for (int i = 0; i < firstTreeLevels.size(); i++) {
            if (firstTreeLevels[i][0] % 2 == 0) {
                evenLevelCountFirstTree++;
            }
        }
        vector<int> answer;
        for (int i = 0; i < firstTreeLevels.size(); i++)
        {
            answer.push_back(max(evenLevelCountSecondTree, int(secondTreeLevels.size() - evenLevelCountSecondTree)));
        }
        for (int i = 0; i < firstTreeLevels.size(); i++)
        {
            if (firstTreeLevels[i][0] % 2 == 0)
            {
                answer[firstTreeLevels[i][1]] += evenLevelCountFirstTree;
            }
            else
            {
                answer[firstTreeLevels[i][1]] += int(firstTreeLevels.size() - evenLevelCountFirstTree);
            }
        }
        return answer;
    }
};

void printVector(vector<int>& vec) {
    cout << "{ ";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i] << (i < vec.size() - 1 ? ", " : " ");
    }
    cout << "}" << endl;
}

void printVector(vector<vector<int>>& vec) {
    cout << "{ ";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << "{ " << vec[i][0] << ", " << vec[i][1] << " }" << (i < vec.size() - 1 ? ", " : " ");
    }
    cout << "}" << endl;
}

void printAnswer(vector<vector<int>>& edges1, vector<vector<int>>& edges2, vector<int>& result)
{

    cout << "__________________________________________________________________\n";
    cout << "For vectors :\n";
    cout << "Edges1:" << endl;
    printVector(edges1);
    cout << "and\n";
    cout << "Edges2:" << endl;
    printVector(edges2);
    cout << "Maximum possible number of nodes = ";
    printVector(result);
    cout << "__________________________________________________________________\n";
}

int main()
{
    Solution sol;
    vector<vector<int>> edges1 = { {0, 1}, {0, 2}, {2, 3}, {2, 4} };
    vector<vector<int>> edges2 = { {0, 1}, {0, 2}, {0, 3}, {2, 7}, {1, 4}, {4, 5}, {4, 6} };
    vector <int> result = sol.maxTargetNodes(edges1, edges2);
    printAnswer(edges1, edges2, result);
    vector<vector<int>> edges3 = { {0,1} ,{0,2},{0,3},{0,4} };
    vector<vector<int>> edges4 = { {0,1} ,{1,2},{2,3} };
    result = sol.maxTargetNodes(edges3, edges4);
    printAnswer(edges3, edges4, result);
    vector<vector<int>> edges5 = { {2,1} ,{7,3},{0,4},{7,5},{2,6},{0,2},{0,7} };
    vector<vector<int>> edges6 = { {3,0} ,{1,2},{5,1},{6,3},{9,4},{5,6},{7,5},{9,7},{8,9} };
    result = sol.maxTargetNodes(edges5, edges6);
    printAnswer(edges5, edges6, result);
}