#ifndef HELPERS_H
#define HELPERS_H

fs::path get_home();
fs::path shadow(fs::path p);
bool can_write_in(fs::path dir);
void move(const fs::path& old_p, const fs::path& new_p);
bool is_a_cpp_src(fs::path f);
bool is_a_c_src(fs::path f);
void safe_remove(fs::path f);

void put_env(const std::string name, const std::string value);

std::string surround(std::string s);
void expand_variable(string& s, fs::path src_dir);

#endif // HELPERS_H
