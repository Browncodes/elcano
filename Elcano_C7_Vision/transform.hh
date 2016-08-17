#pragma once

/* Transform on-camera rectangles into vectors in 3D space */

namespace elcano
{
	double
	get_z(
		uint64_t h,
		double   fovy
	);

	std::tuple<double, double>
	global_to_relative(
		std::tuple<double, double, double>    cam_angle,
		std::tuple<int64_t, int64_t, int64_t> cam_pos,
		std::tuple<int64_t, int64_t, int64_t> cone_pos,
		std::tuple<uint64_t, uint64_t>        img_size,
		std::tuple<double, double>            sensor_size,
		double                                focal_length
	);

	double
	distance_2d(
		std::tuple<double, double> camera,
		std::tuple<double, double> locale
	);

	double
	compute_error(
		std::tuple<double, double, double>    cam_angle,
		std::tuple<int64_t, int64_t, int64_t> cam_pos,
		std::tuple<int64_t, int64_t, int64_t> cone_pos,
		std::tuple<uint64_t, uint64_t>        img_size,
		std::tuple<double, double>            sensor_size,
		double                                focal_length,
		std::tuple<double, double>            detected_loc
	);
}
