while ($true) {
    cd "C:\CODES\COLLEGE\C Programming"
    git add .
    $msg = "Auto commit: $(Get-Date -Format 'yyyy-MM-dd HH:mm:ss')"
    git commit -m "$msg"
    git push origin main
    Start-Sleep -Seconds 300
}
