/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraza <sraza@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:07:43 by sraza             #+#    #+#             */
/*   Updated: 2024/02/20 15:49:33 by sraza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>


class Bureaucrat
{
    private:
        std::string const   m_name;
        unsigned int        m_grade;
    public:
        // コンストラクタ
        Bureaucrat(void);
        Bureaucrat(std::string name, unsigned int grade);
        // コピーコンストラクタ
        Bureaucrat(const Bureaucrat& other);
        // コピー代入演算子
        Bureaucrat &operator=(const Bureaucrat& other);
        // デストラクタ
        ~Bureaucrat(void);

        // メンバ変数
        std::string     getName(void);
        unsigned int    getGrade(void);

        void    GradeTooHighException(void);
        void    GradeTooLowException(void);

        Bureaucrat& operator++(void);
        Bureaucrat& operator--(void);
        
};





#endif