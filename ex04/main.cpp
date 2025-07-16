/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:09:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/16 13:32:05 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

std::string ft_replace(std::string txt, std::string s1, std::string s2)
{
    std::string res = "";
    size_t i = 0;
    size_t occ_i = 0;

    while (true)
    {
        occ_i = txt.find(s1, i);
        if (occ_i == std::string::npos)
            break;
        res += txt.substr(i, occ_i - i);
        res += s2;
        i = occ_i;
        i += s1.length();
    }
    if (i != txt.length() - 1)
        res += txt.substr(i);
    return res;
}

int main(int argc, char const *argv[])
{
    if (argc != 4)
        return 1;
    std::ifstream src_file(argv[1]);
    if (!src_file)
        return 2;
    std::string ext = ".replace";
    std::string dst_file_name = argv[1] + ext;
    std::ofstream dst_file(dst_file_name.c_str());
    if (!dst_file)
        return (src_file.close(), 3);
    std::string line;
    while (std::getline(src_file, line))
        dst_file << ft_replace(line, argv[2], argv[3]) << std::endl;
    src_file.close();
    dst_file.close();
    return 0;
}
