include "backpack_2d.lua"

TRAJECTORY_BUILDER.pure_localization = true;

TRAJECTORY_BUILDER_2D.min_range = 0.
TRAJECTORY_BUILDER_2D.max_range = 7.
TRAJECTORY_BUILDER_2D.missing_data_ray_length = 0.
TRAJECTORY_BUILDER_2D.real_time_correlative_scan_matcher.translation_delta_cost_weight = 2
TRAJECTORY_BUILDER_2D.real_time_correlative_scan_matcher.rotation_delta_cost_weight = 1e-2
TRAJECTORY_BUILDER_2D.real_time_correlative_scan_matcher.linear_search_window = 0.05
TRAJECTORY_BUILDER_2D.real_time_correlative_scan_matcher.angular_search_window = math.rad(5.)
TRAJECTORY_BUILDER_2D.num_accumulated_range_data = 10
TRAJECTORY_BUILDER_2D.submaps.grid_options_2d.resolution = 0.05 --0.05
TRAJECTORY_BUILDER_2D.voxel_filter_size = 0.025
TRAJECTORY_BUILDER_2D.ceres_scan_matcher.translation_weight = 1. --7
TRAJECTORY_BUILDER_2D.ceres_scan_matcher.rotation_weight = 0.01 --15
TRAJECTORY_BUILDER_2D.ceres_scan_matcher.ceres_solver_options.use_nonmonotonic_steps = true
-- TRAJECTORY_BUILDER_2D.ceres_scan_matcher.ceres_solver_options.max_num_iterations = 70
-- TRAJECTORY_BUILDER_2D.ceres_scan_matcher.ceres_solver_options.num_threads = 1
-- TRAJECTORY_BUILDER_2D.motion_filter.max_time_seconds = 1.
-- TRAJECTORY_BUILDER_2D.motion_filter.max_distance_meters = 0.2
-- TRAJECTORY_BUILDER_2D.motion_filter.max_angle_radians = math.rad(6.)

POSE_GRAPH.optimize_every_n_nodes = 5 --10
POSE_GRAPH.optimization_problem.huber_scale = 1e1 --<--1e1
POSE_GRAPH.constraint_builder.min_score = 0.65 --<--0.5

return options
