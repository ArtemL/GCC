// { dg-do compile }
// { dg-options "-std=gnu++0x" }

// 2011-05-17  Paolo Carlini  <paolo.carlini@oracle.com>
//
// Copyright (C) 2011-2014 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

#include <tuple>

void test01()
{
  std::tuple<int> t1;

  int&&   t1one __attribute__((unused)) = std::get<0>(std::move(t1));

  std::tuple<float, int> t2;

  float&& t2one __attribute__((unused)) = std::get<0>(std::move(t2));
  int&&   t2two __attribute__((unused)) = std::get<1>(std::move(t2));

  std::tuple<short, int, double> t3;

  short&&  t3one __attribute__((unused)) = std::get<0>(std::move(t3));
  int&&    t3two __attribute__((unused)) = std::get<1>(std::move(t3));
  double&& t3thr __attribute__((unused)) = std::get<2>(std::move(t3));
}
