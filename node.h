/* The Node struct is used for holding information about information associated with a cell.
 * It holds the row, column, wether something is a wall or not (is_path) and the directions that
 * have been visted from this particular Node.
 *
 * bit_directs documentation:
 * 1 << 0 = right
 * 1 << 1 = down
 * 1 << 2 = left
 * 1 << 3 = up 
 *
 * Author: Sabrina Flemming
 * */
struct Node {
    void *parent;
    unsigned int row; 
    unsigned int col;
    unsigned int is_path;
    unsigned int bit_directs : 4; // Bit packed field representing directions visted
};