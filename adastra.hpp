// adastra.hpp
#ifndef ADASTRA_HPP
#define ADASTRA_HPP

#include <unordered_set>
#include <vector>
#include <iostream>

namespace Adastra
{
    template <typename T>
    void emptyVector(const std::vector<T> &v)
    {
        if (v.empty())
        {
            std::cout << "Vector is empty" << std::endl;
        }
    }

    template <typename T>
    std::vector<T> findDuplicate(const std::vector<T> &v)
    {
        emptyVector(v);
        std::unordered_set<T> seen;
        std::vector<T> duplicates;
        for (const auto &el : v)
        {
            if (seen.count(el))
            {
                duplicates.push_back(el);
            }
            seen.insert(el);
        }
        return duplicates;
    }

    template <typename T>
    bool BinarySearch(const std::vector<T> &v, T target)
    {
        emptyVector(v);
        int left = 0, right = v.size() - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (v[mid] == target)
            {
                return true;
            }
            else if (v[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return false;
    }

    template <typename T>
    void print(const std::vector<T> &v)
    {
        if (v.empty())
        {
            std::cout << std::endl;
            return;
        }
        for (size_t i = 0; i < v.size() - 1; ++i)
        {
            std::cout << v[i] << ",";
        }
        std::cout << v.back() << std::endl;
    }

    template <typename T>
    void test(const std::vector<T> &v)
    {
        for (const auto &i : v)
        {
            std::cout << i << std::endl;
        }
    }

    void hello(const std::string &name);
    int sum(int a, int b);
};

#endif // ADASTRA_HPP
