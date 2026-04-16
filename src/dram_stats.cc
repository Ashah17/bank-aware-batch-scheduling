#include "dram_stats.h"

dram_stats operator-(dram_stats lhs, dram_stats rhs)
{
    lhs.read_requests -= rhs.read_requests;
    lhs.write_requests -= rhs.write_requests;
    lhs.reads -= rhs.reads;
    lhs.writes -= rhs.writes;
    lhs.activates -= rhs.activates;
    lhs.precharges -= rhs.precharges;
    lhs.read_row_hits -= rhs.read_row_hits;
    lhs.write_row_hits -= rhs.write_row_hits;
    lhs.num_write_drains -= rhs.num_write_drains;
    lhs.num_forced_write_drains -= rhs.num_forced_write_drains;
    lhs.tot_time_in_write_mode -= rhs.tot_time_in_write_mode;
    lhs.tot_write_imbalance -= rhs.tot_write_imbalance;
    lhs.tot_bank_parallelism -= rhs.tot_bank_parallelism;
    lhs.tot_bankgroup_parallelism -= rhs.tot_bankgroup_parallelism;
    lhs.tot_read_occu_pre_drain -= rhs.tot_read_occu_pre_drain;
    lhs.tot_read_occu_post_drain -= rhs.tot_read_occu_post_drain;
    lhs.tot_read_latency -= rhs.tot_read_latency;
    lhs.total_dram_time_ps -= rhs.total_dram_time_ps;
    lhs.write_to_write_gap_ps -= rhs.write_to_write_gap_ps;
    lhs.write_to_write_samples -= rhs.write_to_write_samples;
    lhs.wq_full -= rhs.wq_full;
    lhs.rq_full -= rhs.rq_full;
    lhs.penalty_one -= rhs.penalty_one;
    lhs.penalty_six -= rhs.penalty_six;
    lhs.penalty_twentyfour -= rhs.penalty_twentyfour;
    return lhs;
}
