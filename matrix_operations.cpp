#include <vector>
#include <iostream>

#include <iostream>
#include <vector>

using namespace std;

using matrice = vector<vector<double> >;


matrice saisirMatrice(int n)
{
    matrice mat(n, vector<double>(n, 0.0));

    cout << "Saisissez la matrice " << n << "x" << n << ":" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Element à la position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> mat[i][j];
        }
    }

    return mat;
}

matrice additionner(matrice a, matrice b)
{
    int n = a.size();
    int m = a[0].size();

    if (n != b.size() || m != b[0].size())
    {
        cerr << "Les matrices ne sont pas de la même taille pour l'addition." << endl;
        return matrice();
    }

    matrice c(n, vector<double>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    return c;
}

matrice soustraire(matrice a, matrice b)
{
    int n = a.size();
    int m = a[0].size();

    if (n != b.size() || m != b[0].size())
    {
        cerr << "Les matrices ne sont pas de la même taille pour la soustraction." << endl;
        return matrice();
    }

    matrice c(n, vector<double>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    return c;
}

matrice multiplier(matrice a, matrice b)
{
    int n = a.size();
    int m = a[0].size();
    int p = b[0].size();

    if (m != b.size())
    {
        cerr << "Impossible de multiplier les matrices. Les dimensions ne sont pas compatibles." << endl;
        return matrice();
    }

    matrice c(n, vector<double>(p, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < m; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return c;
}

int main()
{ // Implementation part for the A result so the part where we use vector and made the production with the help of functions
    int n;
    cout << "Donnez la taille de matrice nxn: ";
    cin >> n;
    if (n <= 0)
    {
        cerr << "La taille de la matrice doit être supérieure à zéro." << endl;
        return 1;
    }
    matrice a = saisirMatrice(n);
    matrice b = saisirMatrice(n);
    matrice c = multiplier(a, b);

    cout << "Le résultat de la multiplication de deux matrices donnés" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Le résultat de l'addition de deux matrices donnés" << endl;
    c = additionner(a, b);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Le résultat de la soustraction de deux matrices donnés" << endl;
    c = soustraire(a, b);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
