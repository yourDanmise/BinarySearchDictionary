/*
 * Created by yangguang(GYYA@student.unimelb.edu.au) on 2018/8/25.
 */
struct bst{
        struct bst *left;
        struct bst *right;
        char *ID;
        char *Name;
        char *Sex;
        char *Age;
        char *Height;
        char *Weight;
        char *Team;
        char *NOC;
        char *Games;
        char *Year;
        char *Season;
        char *City;
        char *Sport;
        char *Event;
        char *Medal;

    };
/*
    The function you are to write. Takes a parent pointer (null for the root),
    and returns the tree with the child in the right position. Returns the
    item in a new tree with null left/right pointers.
*/
struct bst *bstInsert(struct bst *parent, char** argument);
/*
    Frees the given tree, doing nothing on an empty tree, freeing child trees
    (recursively) first, then freeing the passed parent.
*/
void freeTree(struct bst *parent);
