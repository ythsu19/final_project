#pragma once
#include <map>
#include <string>

class LanguageManager {
public:
    static LanguageManager& GetInstance();

    void LoadLanguage(const std::string& langCode);
    std::string GetText(const std::string& key) const;
    const std::string& GetCurrentLanguage() const;

private:
    std::map<std::string, std::string> dictionary;
    std::string currentLanguage;
};
