//
// Created by rohit on 5/26/22.
//

#ifndef ABSLINEARCLUSTERING_DISTANCES_HPP
#define ABSLINEARCLUSTERING_DISTANCES_HPP

#include <algorithm>
#include <array>
#include <cassert>
#include <cstddef>
#include <cstdint>
#include <random>
#include <tuple>
#include <type_traits>
#include <vector>

///
/// \tparam T
/// \tparam N
/// \param point_a
/// \param point_b
/// \return
template <typename T, size_t N>
T distance_squared(const std::array<T, N>& point_a, const std::array<T, N>& point_b) {
	T d_squared = T();
	for (typename std::array<T, N>::size_type i = 0; i < N; ++i) {
		auto delta = point_a[i] - point_b[i];
		d_squared += delta * delta;
	}	return d_squared;
}




///
/// \tparam T
/// \tparam N
/// \param point_a
/// \param point_b
/// \return
template <typename T, size_t N>
T distance(const std::array<T, N>& point_a, const std::array<T, N>& point_b, const short metric) {
	return std::sqrt(distance_squared(point_a, point_b));
}

#endif //ABSLINEARCLUSTERING_DISTANCES_HPP
