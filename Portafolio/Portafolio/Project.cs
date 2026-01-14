namespace Portafolio;

public sealed class Project
{
    public required string Title { get; init; }
    public required string Description { get; init; }
    public IReadOnlyList<string> Technologies { get; init; } = Array.Empty<string>();
    public string? RepoUrl { get; init; }
}

