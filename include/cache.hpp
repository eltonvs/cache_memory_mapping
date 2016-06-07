/**
 *  @file cache.hpp
 *  @brief The Cache Memory Class
 *  @copyright Copyright &copy; 2016. All rights reserved.
 *
 *  File with the Cache Memory Class
 */

#include <vector>

class Cache {
 public:
    /**
     * @brief Cache Class Construcor
     * @param _sz The Cache's size
     */
    explicit Cache(unsigned _sz = 0u);

    /**
     * @brief Cache Class Destructor
     */
    ~Cache();

    /**
     * @brief Gets the Cache's value at some position
     * @param _pos The position to look for
     * @param _val The variable to receive the value (by reference)
     * @return True if is filled, False otherwise
     */
    bool getValue(unsigned _pos, int &_val) const;

    /**
     * @brief Sets a value in a Cache's position
     * @param _pos The position to fit the value
     * @param _val The value to be inserted
     * @return True if the value was successfully setted, False if not
     */
    bool setValue(unsigned _pos, int _val);

    /**
     * @brief Shows the Cache content
     */
    void show() const;

 private:
    unsigned m_size;            //<! The Cache's size
    std::vector<int> m_memory;  //<! The Cache Memory (a vector of integers)
};
